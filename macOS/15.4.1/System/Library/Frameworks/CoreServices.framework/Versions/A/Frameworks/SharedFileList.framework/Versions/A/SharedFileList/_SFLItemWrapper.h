@class _SFLItem, NSUUID, NSString, SFLBookmark, NSDictionary;

@interface _SFLItemWrapper : NSObject <SFLInternalItem>

@property (readonly) _SFLItem *internalItem;
@property (retain) NSUUID *identifier;
@property (copy) NSString *listIdentifier;
@property (copy) NSString *name;
@property (copy) SFLBookmark *bookmark;
@property (copy) NSDictionary *properties;
@property unsigned long long seed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 listIdentifier:(id)a1;

@end
