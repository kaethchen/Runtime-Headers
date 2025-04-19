@class NSString;

@interface SGPropertyDescription : NSObject {
    void /* unknown type, empty encoding */ name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ visible;
@property (nonatomic, readonly) NSString *description;

+ (id)create:(id)a0 type:(id)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
