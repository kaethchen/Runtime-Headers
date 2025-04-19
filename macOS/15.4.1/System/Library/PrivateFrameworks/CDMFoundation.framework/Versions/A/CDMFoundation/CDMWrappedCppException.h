@interface CDMWrappedCppException : NSException

+ (id)exceptionFromCppExceptionWithMessage:(id)a0;
+ (id)exceptionFromUnknownCppException;

@end
