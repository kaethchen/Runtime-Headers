@class NSString, _EXExtensionIdentity;

@interface QLThumbnailExtension : NSObject {
    void /* unknown type, empty encoding */ identity;
    void /* unknown type, empty encoding */ generatorIdentifier;
    void /* unknown type, empty encoding */ generatorVersion;
    void /* unknown type, empty encoding */ externalResourcesAccessAllowed;
    void /* unknown type, empty encoding */ supportedConcurrencyLevel;
    void /* unknown type, empty encoding */ queueLock;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ supportsInteractiveThumbnailBadges;
@property (nonatomic, readonly) NSString *generatorIdentifier;
@property (nonatomic, readonly) NSString *generatorVersion;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ minimumThumbnailDimension;
@property (nonatomic, readonly) _EXExtensionIdentity *exIdentity;
@property (nonatomic, readonly) BOOL supportsConcurrentRequests;
@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
