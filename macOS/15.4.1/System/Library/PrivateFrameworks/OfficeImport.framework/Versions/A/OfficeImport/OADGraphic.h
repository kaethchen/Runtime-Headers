@interface OADGraphic : OADDrawable {
    OADGraphic *mMasterGraphic;
}

- (id)description;
- (void).cxx_destruct;
- (id)geometry;
- (id)graphicProperties;
- (id)masterGraphic;
- (void)setMasterGraphic:(id)a0;

@end
