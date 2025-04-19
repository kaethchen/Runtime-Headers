@interface _MTLAllocation : _MTLObjectWithLabel {
    unsigned long long _allocationType;
}

@property (readonly) unsigned long long allocatedSize;

- (id)initWithAllocationType:(unsigned long long)a0;

@end
