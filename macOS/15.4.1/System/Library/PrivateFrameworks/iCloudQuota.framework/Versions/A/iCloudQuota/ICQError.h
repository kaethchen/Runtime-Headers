@interface ICQError : NSObject

+ (id)_errorWithCode:(long long)a0 retryAfter:(id)a1;
+ (id)_errorWithCode:(long long)a0 statusCode:(long long)a1;
+ (id)_formatterForHTTPDate;
+ (id)_retryAfterDateFromString:(id)a0;
+ (id)_retryAfterDelayFromString:(id)a0;
+ (id)clientErrorWithStatusCode:(long long)a0;
+ (id)retryErrorWithRetryAfter:(id)a0;
+ (id)serviceUnavailableWithRetryAfter:(id)a0;

@end
