@class NSArray, NSString, NSDictionary;

@interface PKAutoTopUpActionItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *defaultAmountSuggestions;
@property (readonly, copy, nonatomic) NSArray *defaultThresholdSuggestions;
@property (readonly, copy, nonatomic) NSArray *lowBalanceReminderOptions;
@property (readonly, copy, nonatomic) NSString *currency;
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)_processLocalizableStrings:(id /* block */)a0;

@end
