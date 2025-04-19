@class _NSDefaultSectionInfo, NSManagedObject, NSIndexPath;

@interface _PFChangeInfo : NSObject {
    unsigned long long _changeType;
    NSIndexPath *_startIndexPath;
    NSIndexPath *_finalIndexPath;
    _NSDefaultSectionInfo *_startSectionInfo;
    _NSDefaultSectionInfo *_finalSectionInfo;
}

@property (readonly, retain, nonatomic) NSManagedObject *object;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;

@end
