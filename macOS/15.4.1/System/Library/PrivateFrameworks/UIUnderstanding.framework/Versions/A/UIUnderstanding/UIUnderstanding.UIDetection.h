@class NSString;

@interface UIUnderstanding.UIDetection : NSObject {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ vfeature;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ label;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ confidence;
@property (nonatomic, copy) NSString *text;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(long long)a0 confidence:(double)a1 text:(id)a2;

@end
