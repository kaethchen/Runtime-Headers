@class NSArray, EMQuery, NSString;

@interface EMMessageChangeAction : NSObject <NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long origin;
@property (nonatomic) long long actor;
@property (copy, nonatomic) NSArray *objectIDs;
@property (retain, nonatomic) EMQuery *query;
@property (readonly, nonatomic) long long signpostType;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectIDs:(id)a0 origin:(long long)a1 actor:(long long)a2;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2;
- (id)initWithQuery:(id)a0 origin:(long long)a1 actor:(long long)a2;

@end
