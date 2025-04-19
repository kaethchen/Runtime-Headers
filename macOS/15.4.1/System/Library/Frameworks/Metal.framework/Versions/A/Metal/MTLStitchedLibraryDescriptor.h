@class NSArray;

@interface MTLStitchedLibraryDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *functionGraphs;
@property (copy, nonatomic) NSArray *functions;
@property (copy, nonatomic) NSArray *binaryArchives;
@property (nonatomic) unsigned long long options;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)formattedDescription:(unsigned long long)a0;

@end
