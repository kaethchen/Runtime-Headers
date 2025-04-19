@class NSString;

@interface ATXBiomeSuggestedHomePageEvent : NSObject <NSSecureCoding, BMStoreData>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long action;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (id)initWithPageType:(long long)a0 identifier:(id)a1 action:(long long)a2;

@end
