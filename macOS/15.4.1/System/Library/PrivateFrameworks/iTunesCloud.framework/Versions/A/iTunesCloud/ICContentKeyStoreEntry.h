@class NSString, NSData, NSDate, NSNumber;

@interface ICContentKeyStoreEntry : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSData *keyData;
@property (copy, nonatomic) NSDate *renewalDate;
@property (nonatomic) unsigned long long failureCount;
@property (copy, nonatomic) NSNumber *accountDSID;
@property (copy, nonatomic) NSNumber *adamID;
@property (nonatomic) long long keyServerProtocolType;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
