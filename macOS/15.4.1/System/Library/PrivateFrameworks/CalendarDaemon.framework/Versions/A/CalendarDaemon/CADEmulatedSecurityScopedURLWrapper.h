@class CADEmulatedURL;

@interface CADEmulatedSecurityScopedURLWrapper : NSSecurityScopedURLWrapper {
    CADEmulatedURL *_emulatedURL;
}

- (void).cxx_destruct;
- (id)initWithOriginalURL:(id)a0;

@end
