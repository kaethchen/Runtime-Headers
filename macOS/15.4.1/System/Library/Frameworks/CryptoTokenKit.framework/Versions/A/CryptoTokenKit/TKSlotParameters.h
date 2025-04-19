@class NSNumber, NSString;

@interface TKSlotParameters : NSObject

@property long long maxInputLength;
@property long long maxOutputLength;
@property (retain) NSNumber *productID;
@property (retain) NSNumber *vendorID;
@property (retain) NSString *firmwareVersion;
@property BOOL securePINVerificationSupported;
@property BOOL securePINChangeSupported;
@property (retain) NSNumber *displayMaxCharacters;
@property (retain) NSNumber *displayMaxLines;
@property (retain) NSNumber *pinValidationCondition;
@property double interactionTimeout;
@property (retain) NSNumber *minPINLength;
@property (retain) NSNumber *maxPINLength;
@property BOOL delegateWithControlMethod;
@property BOOL delegateWithEscapeMethod;

- (id)description;
- (void).cxx_destruct;
- (id)getDictionaryParameters;
- (id)initWithEntriesFromDictionary:(id)a0;
- (id)initWithMaxBlockSize:(long long)a0;

@end
