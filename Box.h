class Box {
    private:
       int length;
       int width;
       int height;
    public:
        int getHeight();
        int getLength();
        int getWidth();
        void setBoxDetails(int pheight, int plength, int pwidth);
        int calcVolume();
};
