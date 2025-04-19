@class NSUUID, NSString, SFLBookmark, NSDictionary;

@interface _SFLInternalItem : NSObject <SFLInternalItem>

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

@end
