@interface EMEnumProperty : CMProperty {
    int wdValue;
}

+ (id)mapHorizontalAlignmentValue:(int)a0;
+ (id)mapUnderlineValue:(int)a0;
+ (id)mapVerticalAlignmentValue:(int)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)value;
- (id)cssStringForName:(id)a0;
- (id)initWithEnum:(int)a0;
- (id)mapHorizontalAlignment;
- (id)mapUnderline;
- (id)mapVerticalAlignment;

@end
