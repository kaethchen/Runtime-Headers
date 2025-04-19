@class NSUUID;

@interface RSGroupEdge : NSObject <NSCopying> {
    NSUUID *source_object_uuid;
    NSUUID *target_object_uuid;
}

@property (readonly, nonatomic) NSUUID *source_object_uuid;
@property (readonly, nonatomic) NSUUID *target_object_uuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
