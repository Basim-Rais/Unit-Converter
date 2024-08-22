#include <stdio.h>
void timeconverter()
{
    int conversionChoice;
    float inputValue, result;
    printf("\n1. Minutes to Seconds\n");
    printf("2. Minutes to Hours\n");
    printf("3. Hours to Seconds\n");
    printf("4. Hours to Minutes\n");
    printf("5. Seconds to Minutes\n");
    printf("6. Seconds to Hours\n");
    printf("7. Days to Hours\n");
    printf("8. Hours to Days\n");
    printf("0. Exit\n");
    printf("Enter the conversion choice: ");
    scanf("%d", &conversionChoice);
    switch (conversionChoice)
    {
    case 1:
        printf("Enter the value in minutes: ");
        scanf("%f", &inputValue);
        result = inputValue * 60;
        printf("Value: %.2f seconds\n", result);
        break;
    case 2:
        printf("Enter the value in minutes: ");
        scanf("%f", &inputValue);
        result = inputValue / 60;
        printf("Value: %.2f hours\n", result);
        break;
    case 3:
        printf("Enter the value in hours: ");
        scanf("%f", &inputValue);
        result = inputValue * 3600;
        printf("Value: %.2f seconds\n", result);
        break;
    case 4:
        printf("Enter the value in hours: ");
        scanf("%f", &inputValue);
        result = inputValue * 60;
        printf("Value: %.2f minutes\n", result);
        break;
    case 5:
        printf("Enter the value in seconds: ");
        scanf("%f", &inputValue);
        result = inputValue / 60;
        printf("Value: %.2f minutes\n", result);
        break;
    case 6:
        printf("Enter the value in seconds: ");
        scanf("%f", &inputValue);
        result = inputValue / 3600;
        printf("Value: %.2f hours\n", result);
        break;
    case 7:
        printf("Enter the value in days: ");
        scanf("%f", &inputValue);
        result = inputValue * 24;
        printf("Value: %.2f hours\n", result);
        break;
    case 8:
        printf("Enter the value in hours: ");
        scanf("%f", &inputValue);
        result = inputValue / 24;
        printf("Value: %.2f days\n", result);
        break;
    case 0:
        printf("Exiting time converter...\n");
        break;
    default:
        printf("Invalid input\n");
    }
}
void currencyConverter()
{
    int conversionChoice;
    float inputValue, outputResult;
    do
    {
        printf("\nChoose Currency Converter (PKR to other currencies):\n");
        printf("==================================================\n");
        printf("1. PKR to USD\n");
        printf("2. PKR to EUR\n");
        printf("3. PKR to GBP\n");
        printf("4. PKR to JPY\n");
        printf("0. Exit\n");
        printf("Enter choice (0-4): ");
        scanf("%d", &conversionChoice);
        switch (conversionChoice)
        {
        case 1:
            printf("Enter amount in PKR to convert to USD: ");
            scanf("%f", &inputValue);
            outputResult = inputValue / 277.50;
            printf("\n%.2f PKR is equal to %.2f USD.\n", inputValue, outputResult);
            break;
        case 2:
            printf("Enter amount in PKR to convert to EUR: ");
            scanf("%f", &inputValue);
            outputResult = inputValue / 306.00;
            printf("\n%.2f PKR is equal to %.2f EUR.\n", inputValue, outputResult);
            break;
        case 3:
            printf("Enter amount in PKR to convert to GBP: ");
            scanf("%f", &inputValue);
            outputResult = inputValue / 381.50;
            printf("\n%.2f PKR is equal to %.2f GBP.\n", inputValue, outputResult);
            break;
        case 4:
            printf("Enter amount in PKR to convert to JPY: ");
            scanf("%f", &inputValue);
            outputResult = inputValue / 2.52;
            printf("\n%.2f PKR is equal to %.2f JPY.\n", inputValue, outputResult);
            break;
        case 0:
            printf("Exiting the program. Thank you!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 0 and 4.\n");
        }
    } while (conversionChoice != 0);
}
void massConverter()
{
    int conversionChoice;
    float inputValue, outputResult;
    do
    {
        printf("\nChoose Converter:\n");
        printf("=====================\n");
        printf("1. Kilogram Converter\n");
        printf("2. Pound Converter\n");
        printf("3. Ounce Converter\n");
        printf("0. Exit\n");
        printf("Enter choice (0-3): ");
        scanf("%d", &conversionChoice);
        switch (conversionChoice)
        {
        case 1:
            printf("Choose conversion:\n");
            printf("1. Gram to Kilogram\n");
            printf("2. Pound to Kilogram\n");
            printf("3. Ounce to Kilogram\n");
            printf("Enter choice (1, 2, or 3): ");
            scanf("%d", &conversionChoice);
            if (conversionChoice == 1)
            {
                printf("Enter value in grams to convert to kilograms: ");
                scanf("%f", &inputValue);
                outputResult = inputValue / 1000.0;
                printf("\n%.2f Grams is equal to %.2f kilograms.\n", inputValue, outputResult);
            }
            else if (conversionChoice == 2)
            {
                printf("Enter value in pounds to convert to kilograms: ");
                scanf("%f", &inputValue);
                outputResult = inputValue / 2.20462;
                printf("\n%.2f Pounds is equal to %.2f kilograms.\n", inputValue, outputResult);
            }
            else if (conversionChoice == 3)
            {
                printf("Enter value in ounces to convert to kilograms: ");
                scanf("%f", &inputValue);
                outputResult = inputValue / 35.274;
                printf("\n%.2f Ounces is equal to %.2f kilograms.\n", inputValue, outputResult);
            }
            else
            {
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
            }
            break;
        case 2:
            printf("Choose conversion:\n");
            printf("1. Gram to Pound\n");
            printf("2. Kilogram to Pound\n");
            printf("3. Ounce to Pound\n");
            printf("Enter choice (1, 2, or 3): ");
            scanf("%d", &conversionChoice);
            if (conversionChoice == 1)
            {
                printf("Enter value in grams to convert to pounds: ");
                scanf("%f", &inputValue);
                outputResult = inputValue / 453.592;
                printf("\n%.2f Grams is equal to %.2f pounds.\n", inputValue, outputResult);
            }
            else if (conversionChoice == 2)
            {
                printf("Enter value in kilograms to convert to pounds: ");
                scanf("%f", &inputValue);
                outputResult = inputValue * 2.20462;
                printf("\n%.2f Kilograms is equal to %.2f pounds.\n", inputValue, outputResult);
            }
            else if (conversionChoice == 3)
            {
                printf("Enter value in ounces to convert to pounds: ");
                scanf("%f", &inputValue);
                outputResult = inputValue / 16.0;
                printf("\n%.2f Ounces is equal to %.2f pounds.\n", inputValue, outputResult);
            }
            else
            {
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
            }
            break;
        case 3:
            printf("Choose conversion:\n");
            printf("1. Gram to Ounce\n");
            printf("2. Kilogram to Ounce\n");
            printf("3. Pound to Ounce\n");
            printf("Enter choice (1, 2, or 3): ");
            scanf("%d", &conversionChoice);
            if (conversionChoice == 1)
            {
                printf("Enter value in grams to convert to ounces: ");
                scanf("%f", &inputValue);
                outputResult = inputValue * 0.03527396;
                printf("\n%.2f Grams is equal to %.2f ounces.\n", inputValue, outputResult);
            }
            else if (conversionChoice == 2)
            {
                printf("Enter value in kilograms to convert to ounces: ");
                scanf("%f", &inputValue);
                outputResult = inputValue * 35.27396;
                printf("\n%.2f Kilograms is equal to %.2f ounces.\n", inputValue, outputResult);
            }
            else if (conversionChoice == 3)
            {
                printf("Enter value in pounds to convert to ounces: ");
                scanf("%f", &inputValue);
                outputResult = inputValue * 16.0;
                printf("\n%.2f Pounds is equal to %.2f ounces.\n", inputValue, outputResult);
            }
            else
            {
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
            }
            break;
        case 0:
            printf("Exiting the program. Thank you!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 0 and 3.\n");
        }
    } while (conversionChoice != 0);
}
void temperatureConverter()
{
    int conversionChoice;
    float inputValue, result;
    do
    {
        printf("\nChoose Temperature Conversion:\n");
        printf("=============================\n");
        printf("1. Fahrenheit to Celsius\n");
        printf("2. Fahrenheit to Kelvin\n");
        printf("3. Celsius to Fahrenheit\n");
        printf("4. Celsius to Kelvin\n");
        printf("5. Kelvin to Celsius\n");
        printf("6. Kelvin to Fahrenheit\n");
        printf("0. Exit\n");
        printf("Enter choice (0-6): ");
        scanf("%d", &conversionChoice);
        switch (conversionChoice)
        {
        case 1:
            printf("\nEnter temperature in Fahrenheit: ");
            scanf("%f", &inputValue);
            result = (inputValue - 32) * 5 / 9;
            printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", inputValue, result);
            break;
        case 2:
            printf("\nEnter temperature in Fahrenheit: ");
            scanf("%f", &inputValue);
            result = (inputValue - 32) * 5 / 9 + 273.15;
            printf("%.2f Fahrenheit is equal to %.2f Kelvin.\n", inputValue, result);
            break;
        case 3:
            printf("\nEnter temperature in Celsius: ");
            scanf("%f", &inputValue);
            result = (inputValue * 9 / 5) + 32;
            printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", inputValue, result);
            break;
        case 4:
            printf("\nEnter temperature in Celsius: ");
            scanf("%f", &inputValue);
            result = inputValue + 273.15;
            printf("%.2f Celsius is equal to %.2f Kelvin.\n", inputValue, result);
            break;
        case 5:
            printf("\nEnter temperature in Kelvin: ");
            scanf("%f", &inputValue);
            result = inputValue - 273.15;
            printf("%.2f Kelvin is equal to %.2f Celsius.\n", inputValue, result);
            break;
        case 6:
            printf("\nEnter temperature in Kelvin: ");
            scanf("%f", &inputValue);
            result = (inputValue - 273.15) * 9 / 5 + 32;
            printf("%.2f Kelvin is equal to %.2f Fahrenheit.\n", inputValue, result);
            break;
        case 0:
            printf("Exiting the temperature converter. Thank you!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 0 and 6.\n");
        }
    } while (conversionChoice != 0);
}
void convertLength()
{
    double value;
    char fromUnit, toUnit;
    printf("Enter the length value: ");
    scanf("%lf", &value);
    printf("Enter the input unit (m/k/f/i/M): ");
    scanf(" %c", &fromUnit);
    printf("Enter the output unit (m/k/f/i/M): ");
    scanf(" %c", &toUnit);
    double result;
    switch (fromUnit)
    {
    case 'm':
        result = value;
        break;
    case 'k':
        result = value * 1000.0;
        break;
    case 'f':
        result = value * 0.3048;
        break;
    case 'i':
        result = value * 0.0254;
        break;
    case 'M':
        result = value * 1609.34;
        break;
    default:
        printf("Invalid Input unit\n");
        return;
    }
    switch (toUnit)
    {
    case 'm':
        break;
    case 'k':
        result /= 1000.0;
        break;
    case 'f':
        result /= 0.3048;
        break;
    case 'i':
        result /= 0.0254;
        break;
    case 'M':
        result /= 1609.34;
        break;
    default:
        printf("Invalid Output unit\n");
        return;
    }
    printf("%.2f %c is equal to %.2f %c\n", value, fromUnit, result, toUnit);
}
int main()
{
    int choice;
    while (1)
    {
        printf("Please Enter any number for conversions:\n 1) for Time\n 2) for Currency\n 3) for Mass\n 4) for Temperature\n 5) for Length\n 0) to exit: ");
        scanf("%d", &choice);
        if (choice == 0)
        {
            printf("Exiting the program: Goodbye!\n");
            break;
        }
        switch (choice)
        {
        case 1:
            timeconverter();
            break;
        case 2:
            currencyConverter();
            break;
        case 3:
            massConverter();
            break;
        case 4:
            temperatureConverter();
            break;
        case 5:
            convertLength();
            break;
        default:
            printf("Invalid choice. Please Enter a Valid Option.\n");
            break;
        }
    }
    return 0;
}
