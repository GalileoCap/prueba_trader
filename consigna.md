# Prueba Técnica para Candidato a Trader Algorítmico - Implementación del Modelo Black-Scholes en C++

## Objetivo
Desarrollar un programa eficiente y robusto en C++ que implemente el modelo de valoración de opciones Black-Scholes. El objetivo principal es calcular la volatilidad implícita utilizando los precios de mercado de opciones Call y los precios del activo subyacente. Adicionalmente, el programa deberá comparar la volatilidad implícita con la volatilidad histórica o realizada del mismo activo subyacente, proporcionando así una perspectiva integral sobre el comportamiento del mercado y la precisión del modelo.

## Descripción
La tarea del candidato será desarrollar un código en C++ que procese una serie temporal de precios de opciones Call y el precio del activo subyacente. Utilizando el modelo Black-Scholes, el programa deberá calcular la volatilidad implícita y compararla con la volatilidad realizada del activo subyacente, generando como salida ambas series temporales. Se espera que el candidato demuestre buenas prácticas de programación, optimice el código para la eficiencia y maneje adecuadamente los posibles errores o valores atípicos en los datos de entrada. Además, el candidato deberá analizar las diferencias entre las volatilidades y discutir las posibles razones de cualquier discrepancia significativa observada.

## Requisitos de Entrada
* Serie temporal de los precios de las opciones Call europeas (Exp\_Octubre.csv).
* Serie temporal de los precios del activo subyacente (Exp\_Octubre.csv).
* Tasa de interés libre de riesgo constante = 100%.
* Time to matirity: Varia según el día en que me posiciono al recorrer la serie de tiempo.
* Strike constante = 1033.

## Salida Esperada
* Serie temporal de la volatilidad implícita correspondiente a cada precio de opción Call de la entrada.
* Serie temporal de la volatilidad realizada correspondiente al activo subyacente.
* Graficar ambas series en el mismo eje temporal para compararlas.

## Aclaraciones
Ambas series de tiempo de salida pueden estar en el mismo archivo .csv. y el candidato es libre de elegir el método para graficarlas.

## Especificaciones Técnicas
Hay más de un método valido para el cálculo de la volatilidad implícita. Se pide, evaluar e implementar el método seleccionado para la estimación de la volatilidad implícita. El código debe ser claro y bien comentado. Incluir manejo de errores para garantizar la robustez del programa. Documentar supuestos y decisiones de diseño importantes en el código.

## Entrega
El código fuente debe ser entregado en un repositorio de GitHub con un README que explique cómo se resolvió el ejercicio adjuntando los gráficos correspondientes.  
Comentario, para explorar el archivo .csv configurar el Excel con la coma (,) como separador decimal.
