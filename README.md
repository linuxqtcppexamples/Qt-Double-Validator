# Qt-Double-Validator
QLineEdit Double Validator in Qt

This example is used to set double validators to QLineEdit

The QDoubleValidator class provides range checking of floating-point numbers.

QDoubleValidator provides an upper bound, a lower bound, and a limit on the number of digits after the decimal point. It does not provide a fixup() function.

You can set the acceptable range in one call with setRange(), or with setBottom() and setTop(). Set the number of decimal places with setDecimals(). The validate() function returns the validation state.

QDoubleValidator uses its locale() to interpret the number. For example, in the German locale, "1,234" will be accepted as the fractional number 1.234. In Arabic locales, QDoubleValidator will accept Arabic digits.

Note: The QLocale::NumberOptions set on the locale() also affect the way the number is interpreted. For example, since QLocale::RejectGroupSeparator is not set by default, the validator will accept group separators. It is thus recommended to use QLocale::toDouble() to obtain the numeric value.
