@class NSUUID, NSString, NSDictionary;

@interface SFLLoginItem : NSObject <SFLInternalItem>

@property (retain) id internalLoginItem;
@property (retain) NSUUID *identifier;
@property (copy) NSString *listIdentifier;
@property (copy) NSString *name;
@property (copy) id bookmark;
@property (copy) NSDictionary *properties;
@property unsigned long long seed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLoginItem:(id)a0;
- (id)internalItem;

@end
