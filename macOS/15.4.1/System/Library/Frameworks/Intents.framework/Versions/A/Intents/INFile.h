@class NSString, NSItemProvider, NSData, INItemProviderRequestMetadata, NSNumber, NSURL;

@interface INFile : NSObject <INJSONSerializable, INEnumerable, NSSecureCoding> {
    NSData *_memoryMappedFileData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSData *_bookmarkData;
@property (readonly, nonatomic) BOOL _hasAssociatedAuditToken;
@property (nonatomic, getter=_isMarkedForDeletionOnDeallocation, setter=_setMarkedForDeletionOnDeallocation:) BOOL _markedForDeletionOnDeallocation;
@property (nonatomic, setter=_setAssociatedAuditToken:) struct { unsigned int x0[8]; } _associatedAuditToken;
@property (readonly) BOOL _isFileURLBased;
@property (copy, nonatomic, setter=_setRemovedOnCompletionValue:) NSNumber *_removedOnCompletionValue;
@property (readonly) NSItemProvider *_itemProvider;
@property (copy, setter=_setItemProviderRequestMetadata:) INItemProviderRequestMetadata *_itemProviderRequestMetadata;
@property (readonly, copy) NSData *data;
@property (copy) NSString *filename;
@property (readonly, copy) NSString *typeIdentifier;
@property (readonly) NSURL *fileURL;
@property BOOL removedOnCompletion;

+ (void)initialize;
+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;
+ (id)fileWithData:(id)a0 filename:(id)a1 typeIdentifier:(id)a2;
+ (id)fileWithFileURL:(id)a0 filename:(id)a1 typeIdentifier:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)itemProvider;
- (id)_dictionaryRepresentation;
- (BOOL)_associatedAuditTokenIsEqualToAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_initWithBookmarkData:(id)a0 filename:(id)a1 typeIdentifier:(id)a2 removedOnCompletion:(id)a3;
- (id)_initWithData:(id)a0 filename:(id)a1 fileURL:(id)a2 typeIdentifier:(id)a3 removedOnCompletion:(id)a4;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (void)loadDataRepresentationWithType:(id)a0 completion:(id /* block */)a1;
- (void)loadFileRepresentationWithType:(id)a0 completion:(id /* block */)a1;

@end
