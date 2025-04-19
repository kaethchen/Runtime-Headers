@class NSData;

@interface IPMDEventParameter : NSObject <NSSecureCoding> {
    NSData *eventObject;
    unsigned int eventType;
    unsigned int eventSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)eventParameterWithData:(const void *)a0 type:(unsigned int)a1 size:(unsigned int)a2;
+ (BOOL)isPIDNative;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)replacementObjectForPortCoder:(id)a0;
- (unsigned int)eventType;
- (const void *)dataPtr;
- (void)addObjectToArray:(id)a0;
- (id)dataObject;
- (unsigned int)eventSize;
- (id)initWithData:(const void *)a0 type:(unsigned int)a1 size:(unsigned int)a2;
- (id)initWithNSData:(id)a0 type:(unsigned int)a1 size:(unsigned int)a2;
- (id)initWithNSValue:(id)a0 type:(unsigned int)a1 size:(unsigned int)a2;
- (id)initWithObject:(id)a0 type:(unsigned int)a1 size:(unsigned int)a2;

@end
