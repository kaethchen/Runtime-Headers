@class NSString, NSSet;

@interface _CDSpotlightDeletionOperation : NSObject <NSSecureCoding, BMStoreData> {
    NSString *_deletionType;
    NSString *_bundleId;
    NSSet *_itemIdentifiers;
    NSSet *_domainIdentifiers;
    id /* block */ _completion;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deletionForEventsWithDomainIdentifiers:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
+ (id)deletionForEventsWithItemIdentifiers:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeletionType:(id)a0 bundleId:(id)a1 itemIdentifiers:(id)a2 domainIdentifiers:(id)a3 completion:(id /* block */)a4;
- (id)serialize;

@end
