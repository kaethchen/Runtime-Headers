@class NSURL, NSString;

@interface PurgeableDirectory : NSObject <PurgeableItem>

@property (retain, nonatomic) NSURL *itemURL;
@property (nonatomic) unsigned long long purgeOrder;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 purgeOrder:(unsigned long long)a1;
- (BOOL)purgeAndGetSize:(unsigned long long *)a0;

@end
