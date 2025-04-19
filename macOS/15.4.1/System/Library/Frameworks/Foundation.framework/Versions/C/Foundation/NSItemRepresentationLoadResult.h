@class NSString, NSSecurityScopedURLWrapper, NSData, NSError;

@interface NSItemRepresentationLoadResult : NSObject <NSCopying>

@property (copy) NSString *archivedObjectClassName;
@property (copy) NSData *data;
@property (retain) NSSecurityScopedURLWrapper *urlWrapper;
@property (copy) id /* block */ cleanupHandler;
@property (copy) NSError *error;
@property (retain) Class archivedObjectClass;
@property BOOL wasOpenedInPlace;

+ (id)resultWithData:(id)a0 urlWrapper:(id)a1 cleanupHandler:(id /* block */)a2 error:(id)a3;
+ (id)resultWithError:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithData:(id)a0 urlWrapper:(id)a1 cleanupHandler:(id /* block */)a2 error:(id)a3;

@end
