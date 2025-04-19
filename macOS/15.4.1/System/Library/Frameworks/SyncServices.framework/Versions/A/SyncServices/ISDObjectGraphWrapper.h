@class NSData;

@interface ISDObjectGraphWrapper : NSObject {
    NSData *_data;
}

+ (id)graphWrapperWithObject:(id)a0;

- (void)dealloc;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;

@end
