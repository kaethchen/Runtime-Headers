@interface RSRoomTypePolygon : RS2DPolygon <NSCopying> {
    int _type;
}

@property (readonly, nonatomic) int type;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
