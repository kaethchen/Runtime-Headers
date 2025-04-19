@class SUCatalog, NSArray;

@interface SUPackageSource : NSObject <NSSecureCoding, PKPackageSource>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL packageSourceIsValid;
@property (retain) SUCatalog *catalog;
@property (readonly) NSArray *allPackageReferences;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)digestForPackageAtURLPath:(id)a0;
- (id)initWithCatalog:(id)a0;
- (BOOL)registerProduct:(id)a0;

@end
