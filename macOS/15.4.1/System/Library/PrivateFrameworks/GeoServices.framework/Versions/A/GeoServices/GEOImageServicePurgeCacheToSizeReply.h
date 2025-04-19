@class NSString;

@interface GEOImageServicePurgeCacheToSizeReply : GEOXPCReply <GEOXPCReply>

@property (nonatomic) unsigned long long amountDeleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValid;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;

@end
