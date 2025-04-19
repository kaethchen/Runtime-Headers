@class NSArray;

@interface _NSFCFakelinkGroupInfo : NSObject {
    struct _fakelink_group { } *group;
    struct __DADisk { } *systemDisk;
    struct __DADisk { } *dataDisk;
    struct __CFURL { } *systemURL;
    struct __CFURL { } *dataURL;
    NSArray *destinationNodes;
}

- (void)dealloc;

@end
