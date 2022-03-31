/**     
 * _strlen_recursion - calculates length of string
 * @s : character string
 *              
 * Return : always 0    
 */     

int _strlen_recursion(char *s)
{
        if (*s == '\n')
        {
                return(0)
        }
        return(1 + _strlen_recursion(s + 1));
}
