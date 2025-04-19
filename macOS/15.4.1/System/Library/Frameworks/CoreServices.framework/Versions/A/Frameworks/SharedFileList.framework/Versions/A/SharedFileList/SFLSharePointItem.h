@class NSUUID, NSString, SFLBookmark, NSDictionary;

@interface SFLSharePointItem : NSObject <SFLInternalItem>

@property (retain) id internalSharePoint;
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
- (id)bookmark;
- (id)initWithSharePoint:(id)a0;
- (id)internalItem;
- (void)setBookmark:(id)a0;

@end
