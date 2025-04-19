@class NSArray, NSDictionary, NSString;

@interface PKRequiredGLRenderer : NSObject {
    long long _queryVersion;
    NSArray *_extensions;
    NSDictionary *_symbolTable;
}

@property (readonly) double version;
@property (readonly, retain) NSArray *extensions;
@property (readonly, retain) NSDictionary *limits;
@property (readonly, retain) NSString *vendorName;
@property (readonly, retain) NSString *rendererName;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)valueForKeyPath:(id)a0;
- (id)initWithQueryVersion:(long long)a0 symbols:(id)a1;

@end
