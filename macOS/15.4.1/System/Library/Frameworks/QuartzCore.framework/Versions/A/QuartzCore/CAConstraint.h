@class NSString;

@interface CAConstraint : NSObject <NSSecureCoding> {
    NSString *_srcId;
    unsigned short _srcAttr : 16;
    unsigned short _attr : 16;
    double _scale;
    double _offset;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) int attribute;
@property (readonly) NSString *sourceName;
@property (readonly) int sourceAttribute;
@property (readonly) double scale;
@property (readonly) double offset;

+ (id)constraintWithAttribute:(int)a0 relativeTo:(id)a1 attribute:(int)a2 offset:(double)a3;
+ (void)CAMLParserEndElement:(id)a0 content:(id)a1;
+ (id)constraintWithAttribute:(int)a0 relativeTo:(id)a1 attribute:(int)a2;
+ (id)constraintWithAttribute:(int)a0 relativeTo:(id)a1 attribute:(int)a2 scale:(double)a3 offset:(double)a4;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)initWithAttribute:(int)a0 relativeTo:(id)a1 attribute:(int)a2 scale:(double)a3 offset:(double)a4;

@end
