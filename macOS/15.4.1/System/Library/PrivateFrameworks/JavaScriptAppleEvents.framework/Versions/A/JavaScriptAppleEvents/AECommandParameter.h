@class NSString, NSArray;

@interface AECommandParameter : NSObject

@property (retain) NSString *displayName;
@property unsigned int code;
@property BOOL optional;
@property (retain) NSArray *types;

+ (id)parameterWithCode:(unsigned int)a0 types:(id)a1 optional:(BOOL)a2 displayName:(id)a3;

- (void).cxx_destruct;
- (id)initWithCode:(unsigned int)a0 types:(id)a1 optional:(BOOL)a2 displayName:(id)a3;

@end
