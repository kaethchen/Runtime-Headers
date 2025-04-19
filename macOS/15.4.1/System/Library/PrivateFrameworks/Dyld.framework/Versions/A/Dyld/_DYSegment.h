@class NSString;

@interface _DYSegment : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long permissions;
@property (nonatomic, readonly) unsigned long long vmsize;
@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly) unsigned long long preferredLoadAddress;

- (id)init;
- (void).cxx_destruct;
- (BOOL)withSegmentData:(id /* block */)a0;

@end
