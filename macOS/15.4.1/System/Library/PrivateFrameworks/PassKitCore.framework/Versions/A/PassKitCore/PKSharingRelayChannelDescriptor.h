@class NSString;

@interface PKSharingRelayChannelDescriptor : PKSharingChannelDescriptor

@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly, nonatomic) NSString *region;
@property (readonly, nonatomic) BOOL stateful;
@property (readonly, nonatomic) NSString *existingChannelURL;
@property (readonly, nonatomic) NSString *existingMailboxIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)createChannelWithRegion:(id)a0;
+ (id)createChannelWithRegion:(id)a0 stateful:(BOOL)a1;
+ (id)existingChannelForMailboxIdentifier:(id)a0;
+ (id)existingChannelForURL:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithSubType:(unsigned long long)a0 region:(id)a1 stateful:(BOOL)a2 existingChannelURL:(id)a3 mailboxIdentifier:(id)a4;

@end
