@class NSSet, NSMutableArray, FBKGroupedDevice;

@interface FBKDeferredAttachmentCollection : NSObject

@property (retain, nonatomic) NSMutableArray *sortedAttachments;
@property (retain, nonatomic) FBKGroupedDevice *device;
@property (readonly, nonatomic) NSSet *allMatchers;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)deferredAttachmentsFromMatchers:(id)a0;
- (id)initDevice:(id)a0 matcherPredicates:(id)a1;

@end
