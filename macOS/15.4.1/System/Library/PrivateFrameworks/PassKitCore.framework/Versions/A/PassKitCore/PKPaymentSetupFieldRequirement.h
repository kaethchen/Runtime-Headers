@class NSString;
@protocol NSObject, NSCopying;

@interface PKPaymentSetupFieldRequirement : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *fieldIdentifier;
@property (copy, nonatomic) id<NSObject, NSCopying> value;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
