@interface MOFast2DIndex : NSNumber {
    unsigned long long _hash;
}

@property (readonly, nonatomic) unsigned int item;
@property (readonly, nonatomic) unsigned int section;

+ (id)numberWithUnsignedLongLong:(unsigned long long)a0;
+ (id)indexForItem:(unsigned int)a0 inSection:(unsigned int)a1;

- (id)initWithUnsignedLongLong:(unsigned long long)a0;
- (const char *)objCType;
- (unsigned long long)unsignedLongLongValue;
- (void)getValue:(void *)a0;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (id)indexPath;
- (id)initWithItem:(unsigned int)a0 inSection:(unsigned int)a1;

@end
