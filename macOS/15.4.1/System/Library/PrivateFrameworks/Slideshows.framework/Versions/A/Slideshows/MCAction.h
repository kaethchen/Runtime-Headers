@class NSString;

@interface MCAction : MCObjectLight {
    unsigned int _flags;
}

@property (copy) NSString *targetObjectID;
@property (nonatomic) BOOL tracksInParent;

- (id)description;
- (id)snapshot;
- (BOOL)isSnapshot;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
