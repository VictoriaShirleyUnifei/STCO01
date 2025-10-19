// Critique as seguintes versões de remove:

// Versão 1:
// for (int j = n-1; j > k; --j)  
//    v[j-1] = v[j];

// Versão 2:
// for (int j = k+1; j < n; ++j)  
//    v[j-1] = v[j];
// v[n-1] = 0;
   
// if (k < n - 1) 
//    for (int j = k+1; j < n; ++j)  
//       v[j-1] = v[j];

//Resposta:
// Versão 1: Esta versão está incorreta porque o loop está iterando de trás para frente,
// o que faz com que os elementos sejam sobrescritos incorretamente.

// Versão 2: Esta versão está correta. Ela itera do índice k+1 até n-1,
// movendo cada elemento uma posição para a esquerda, o que é o comportamento esperado.