@class NSString, NSDictionary;

@interface IMRKResponse : NSObject

@property (readonly) NSString *string;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *category;

+ (id)alloc;

- (void).cxx_destruct;

@end
