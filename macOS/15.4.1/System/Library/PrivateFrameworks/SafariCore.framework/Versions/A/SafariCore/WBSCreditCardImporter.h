@class NSString, NSError, NSMutableArray, NSNumber;
@protocol WBSCreditCardImporterDelegate;

@interface WBSCreditCardImporter : NSObject <WBSJSONReaderDelegate> {
    NSError *_lastError;
    NSMutableArray *_stack;
    BOOL _foundCreditCardArray;
    NSString *_cardNumber;
    NSString *_cardName;
    NSString *_cardholderName;
    NSNumber *_expirationDateMonth;
    NSNumber *_expirationDateYear;
    NSNumber *_lastUsedDateTimeInterval;
}

@property (weak, nonatomic) id<WBSCreditCardImporterDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)parseURL:(id)a0 error:(id *)a1;
- (BOOL)_checkNotAtRootLevel;
- (BOOL)_isParsingCreditCard;
- (BOOL)_isParsingCreditCardArray;
- (id)_popKeyFromStackIfPossible;
- (id)_sanitizedCardNumberFromImportedCardNumber:(id)a0;
- (BOOL)jsonReader:(id)a0 appendKey:(id)a1;
- (BOOL)jsonReader:(id)a0 error:(id)a1;
- (BOOL)jsonReader:(id)a0 scalarValue:(id)a1;
- (BOOL)jsonReaderBeginArray:(id)a0;
- (BOOL)jsonReaderBeginObject:(id)a0;
- (BOOL)jsonReaderEndArray:(id)a0;
- (BOOL)jsonReaderEndObject:(id)a0;
- (BOOL)parseFileHandle:(id)a0 error:(id *)a1;

@end
