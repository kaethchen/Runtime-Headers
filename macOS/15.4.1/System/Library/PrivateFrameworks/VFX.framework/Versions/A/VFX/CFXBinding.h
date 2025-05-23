@class NSString, NSDictionary;

@interface CFXBinding : NSObject

@property (retain, nonatomic) id sourceObject;
@property (retain, nonatomic) NSString *keyPathSrc;
@property (retain, nonatomic) NSString *keyPathDst;
@property (retain, nonatomic) NSDictionary *options;

- (void)dealloc;

@end
