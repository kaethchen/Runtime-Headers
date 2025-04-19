@class NSUUID, NSArray, NSString;

@interface UIObjectCompat : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ normalizedSquaredRect;
    void /* unknown type, empty encoding */ groupingInfo;
}

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) void /* unknown type, empty encoding */ detection;
@property (nonatomic, retain) void /* unknown type, empty encoding */ boundingBox;
@property (nonatomic, retain) void /* unknown type, empty encoding */ iconDetection;
@property (nonatomic, retain) void /* unknown type, empty encoding */ clickDetection;
@property (nonatomic, retain) void /* unknown type, empty encoding */ focusDetection;
@property (nonatomic, copy) NSArray *children;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDetection:(id)a0 clickable:(id)a1 focused:(id)a2 icon:(id)a3 boundingBox:(id)a4 children:(id)a5;
- (id)initWithLabel:(long long)a0 confidence:(double)a1 text:(id)a2 boundingBox:(id)a3 children:(id)a4 clickable:(BOOL)a5 focused:(BOOL)a6;

@end
