@class NSString, CKAsn1Token;

@interface CKAsn1ReceiptToken : NSObject

@property (readonly) CKAsn1Token *contentToken;
@property (readonly) unsigned long long integerValue;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long typeVersion;

+ (id)readFromBuffer:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)a0 typeVersion:(unsigned long long)a1 contentToken:(id)a2;
- (BOOL)contentIsAnInteger;

@end
