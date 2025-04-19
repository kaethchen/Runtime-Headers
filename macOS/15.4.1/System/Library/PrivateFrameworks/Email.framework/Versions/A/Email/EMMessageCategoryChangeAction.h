@protocol ECEmailAddressConvertible;

@interface EMMessageCategoryChangeAction : EMMessageChangeAction

@property (nonatomic) unsigned long long categoryType;
@property (nonatomic) unsigned long long changeOptions;
@property (copy, nonatomic) id<ECEmailAddressConvertible> senderAddress;
@property (readonly, nonatomic) BOOL isModelCategoryRestoration;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isModelCategoryRestoration:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 categoryType:(unsigned long long)a3 changeOptions:(unsigned long long)a4;
- (id)initWithSenderAddress:(id)a0 origin:(long long)a1 actor:(long long)a2 categoryType:(unsigned long long)a3 changeOptions:(unsigned long long)a4;

@end
