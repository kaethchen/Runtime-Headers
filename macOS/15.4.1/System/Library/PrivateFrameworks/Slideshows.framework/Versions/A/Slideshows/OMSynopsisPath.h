@interface OMSynopsisPath : NSObject

@property (readonly) unsigned long long collection;
@property (readonly) unsigned long long group;
@property (readonly) unsigned long long item;

+ (id)synopsisPathForItem:(unsigned long long)a0 inGroup:(unsigned long long)a1;
+ (id)synopsisPathForItem:(unsigned long long)a0 inGroup:(unsigned long long)a1 inCollection:(unsigned long long)a2;

@end
