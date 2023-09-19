#include "main.h"
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: void;
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t i;
	unsigned char *byte_ptr, *byte_sec_ptr;
	void *sec_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		sec_ptr = malloc(new_size);
		if (sec_ptr == NULL)
			return (NULL);
		byte_ptr = (unsigned char *)ptr;
		byte_sec_ptr = (unsigned char *)sec_ptr;
		for (i = 0; i < old_size; i++)
			byte_sec_ptr[i] = byte_ptr[i];
		free(ptr);
		return (sec_ptr);
	}
	sec_ptr = malloc(new_size);
	if (sec_ptr == NULL)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	byte_sec_ptr = (unsigned char *)sec_ptr;
	for (i = 0; i < new_size; i++)
		byte_sec_ptr[i] = byte_ptr[i];
	free(ptr);
	return (sec_ptr);
}
