#include <GL/glut.h>
#include <math.h>

float color(float color){
	return color/255;
}

float i=0,j=0;
void inicializa(void){
	glClearColor(color(0),color(255),color(255),0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,1200,0,1200);
}
	

	
	int x00,y00,x200,y200,xnn,ynn,x2nn,y2nn;
	void CurvaBezier(void){
		///////////////////////////////////////////////////////////////////////////Primera parte/////////////////////////////////////////////////////////////////////
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		glClear(GL_COLOR_BUFFER_BIT);
		float dx,dy,m,eps;
		float xi,yi;
		float dx2,dy2,m2,eps2;	
		float xi2,yi2;
		float n;
		
		
		//inicializamos variables
		x00=540; y00=1004;
		x200=819;y200=991;
		//xnn=657;ynn=866;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{355,932,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{958,801,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(174),color(23),color(4));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~2~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=167; y00=858;
		x200=99;y200=617;
		//xnn=263;ynn=691;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{355,932,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{172,452,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~3~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=238; y00=284;
		x200=424;y200=161;
		//xnn=376;ynn=303;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{172,452,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{579,154,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~4~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=693; y00=148;
		x200=828;y200=226;
		//xnn=751;ynn=239;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{579,154,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{923,325,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~5~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=1022; y00=428;
		x200=1095;y200=610;
		//xnn=940;ynn=563;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{923,325,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{958,801,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		
		
		
		///////////////////////////////////////////////////////////////////////////Segunda parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//glClear(GL_COLOR_BUFFER_BIT);
		//inicializamos variables
		x00=956; y00=967;
		x200=1068;y200=636;
		//xnn=792;ynn=716
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{582,971,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{1002,461,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(235),color(36),color(3));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~7~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=937; y00=288;
		x200=785;y200=218;
		//xnn=840;ynn=321;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{1002,461,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{678,181,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~8~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=574; y00=146;
		x200=436;y200=162;
		//xnn=476;ynn=247;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{678,181,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{273,312,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~9~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=105; y00=496;
		x200=123;y200=695;
		//xnn=253;ynn=572;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{273,312,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{233,832,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~10~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=344; y00=965;
		x200=483;y200=972;
		//xnn=408;ynn=901;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{233,832,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{582,971,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////Tercera parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//glClear(GL_COLOR_BUFFER_BIT);
		//inicializamos variables
		x00=575; y00=172;
		x200=644;y200=211;
		//xnn=792;ynn=716
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{478,197,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{718,264,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(245),color(38),color(3));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~12~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=861; y00=366;
		x200=975;y200=581;
		//xnn=253;ynn=572;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{718,264,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{873,748,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~13~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=822; y00=911;
		x200=758;y200=970;
		//xnn=253;ynn=572;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{873,748,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{582,971,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~14~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=365; y00=975;
		x200=184;y200=875;
		//xnn=253;ynn=572;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{582,971,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{154,646,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~15~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=137; y00=457;
		x200=295;y200=240;
		//xnn=253;ynn=572;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{154,646,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{478,197,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		///////////////////////////////////////////////////////////////////////////Cuarta parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//glClear(GL_COLOR_BUFFER_BIT);
		//inicializamos variables
		x00=878; y00=334;
		x200=487;y200=101;
		//xnn=792;ynn=716
		xnn=701;ynn=755;
		x2nn=371;y2nn=496;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{825,689,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{256,353,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(255),color(49),color(13));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~17~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=163; y00=456;
		x200=125;y200=559;
		//xnn=253;ynn=572;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{256,353,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{168,700,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~18~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=212; y00=849;
		x200=308;y200=928;
		//xnn=253;ynn=572;
		xnn=532;ynn=581;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{168,700,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{433,950,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~19~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=560; y00=974;
		x200=635;y200=988;
		//xnn=253;ynn=572;
		xnn=585;ynn=950;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{433,950,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{737,949,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~20~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=744; y00=945;
		x200=820;y200=869;
		//xnn=253;ynn=572;
		xnn=782;ynn=866;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{737,949,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{828,782,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~21~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=792; y00=837;
		x200=710;y200=868;
		//xnn=253;ynn=572;
		xnn=798;ynn=898;
		x2nn=537;y2nn=1022;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{828,782,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{659,849,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~22~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=651; y00=850;
		x200=512;y200=871;
		//xnn=253;ynn=572;
		xnn=617;ynn=975;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{659,849,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{505,879,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~23~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=473; y00=900;
		x200=424;y200=918;
		//xnn=253;ynn=572;
		xnn=541;ynn=963;
		x2nn=317;y2nn=961;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{505,879,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{343,840,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~24~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=807; y00=790;
		x200=723;y200=803;
		//xnn=253;ynn=572;
		xnn=679;ynn=574;	
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{825,690,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{688,803,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~25~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=648; y00=803;
		x200=683;y200=767;
		//xnn=253;ynn=572;
		xnn=712;ynn=781;	
		x2nn=625;y2nn=585;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{688,803,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{668,756,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////Quinta parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//glClear(GL_COLOR_BUFFER_BIT);
		//inicializamos variables
		x00=761; y00=473;
		x200=527;y200=312;
		//xnn=792;ynn=716
		xnn=499;ynn=554;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{661,753,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{336,355,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(255),color(62),color(28));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~26~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=164; y00=392;
		x200=125;y200=548;
		//xnn=263;ynn=691;
		xnn=718;ynn=264;
		x2nn=424;y2nn=1137;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{336,355,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{168,700,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~27~~~~~~~~~~~~~~
		x00=212; y00=849;
		x200=308;y200=928;
		//xnn=253;ynn=572;
		xnn=230;ynn=695;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{168,700,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{433,950,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~28~~~~~~~~~~~~~~
		x00=505; y00=968;
		x200=535;y200=960;
		//xnn=253;ynn=572;
		xnn=469;ynn=915;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{433,950,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{505,879,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~29~~~~~~~~~~~~~~
		x00=473; y00=900;
		x200=424;y200=918;
		//xnn=253;ynn=572;
		xnn=550;ynn=950;
		x2nn=291;y2nn=980;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{505,879,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{344,841,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~30~~~~~~~~~~~~~~
		x00=610; y00=835;
		x200=474;y200=692;
		//xnn=253;ynn=572;
		xnn=257;ynn=756;
		x2nn=428;y2nn=536;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{344,841,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{543,614,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~31~~~~~~~~~~~~~~
		x00=537; y00=675;
		x200=579;y200=745;
		//xnn=253;ynn=572;
		xnn=572;ynn=671;
		x2nn=677;y2nn=692;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{543,614,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{601,727,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~32~~~~~~~~~~~~~~
		x00=631; y00=704;
		x200=610;y200=759;
		//xnn=253;ynn=572;
		xnn=628;ynn=658;
		x2nn=641;y2nn=744;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{601,727,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{661,753,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		///////////////////////////////////////////////////////////////////////////Sexta parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//glClear(GL_COLOR_BUFFER_BIT);
		//inicializamos variables
		x00=366; y00=910;
		x200=509;y200=1007;
		//xnn=792;ynn=716
		xnn=565; ynn=922;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{398,905,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{714,936,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(255),color(86),color(53));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~33~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=802; y00=906;
		x200=802;y200=853;
		//xnn=263;ynn=691;
		xnn=666;ynn=930;
		x2nn=706;y2nn=883;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{714,936,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{755,853,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~34~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=751; y00=853;
		x200=602;y200=895;
		//xnn=263;ynn=691;
		xnn=733;ynn=897;
		x2nn=629;y2nn=931;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{775,853,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{533,905,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////Septima parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=489; y00=929;
		x200=451;y200=907;
		//xnn=657;ynn=866;
		xnn=545;ynn=929;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{532,938,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{555,920,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(255),color(141),color(120));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~35~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=524; y00=952;
		x200=642;y200=940;
		//xnn=263;ynn=691;
		xnn=579;ynn=924;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{488,919,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{671,929,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~36~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=715; y00=913;
		x200=740;y200=881;
		//xnn=263;ynn=691;
		xnn=670;ynn=914;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{671,929,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{668,899,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}

		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~36~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=638; y00=908;
		x200=601;y200=922;
		//xnn=263;ynn=691;
		xnn=695;ynn=908;
		x2nn=620;y2nn=936;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{668,899,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{555,920,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////Octava parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=652; y00=745;
		x200=625;y200=531;
		//xnn=657;ynn=866;
		xnn=591;ynn=711;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{827,687,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{576,530,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(255),color(93),color(62));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~38~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=548; y00=528;
		x200=564;y200=702;
		//xnn=263;ynn=691;
		xnn=682;ynn=692;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{579,529,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{591,711,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~39~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=682; y00=714;
		x200=671;y200=789;
		//xnn=263;ynn=691;
		xnn=682;ynn=662;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{591,711,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{700,785,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~40~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=798; y00=744;
		x200=851;y200=679;
		//xnn=263;ynn=691;
		xnn=662;ynn=672;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{700,785,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{827,687,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		///////////////////////////////////////////////////////////////////////////Novena parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=698; y00=778;
		x200=826;y200=740;
		//xnn=657;ynn=866;
		xnn=689;ynn=762;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{694,769,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{750,737,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(255),color(143),color(123));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~41~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=692; y00=734;
		x200=611;y200=679;
		//xnn=661;ynn=697;
		xnn=708;ynn=760;
		x2nn=597;y2nn=691;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{750,737,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{590,618,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~42~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=568; y00=594;
		x200=574;y200=643;
		//xnn=661;ynn=697;
		xnn=613;ynn=669;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{590,618,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{585,692,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~43~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=597; y00=712;
		x200=655;y200=697;
		//xnn=661;ynn=697;
		xnn=613;ynn=669;
		x2nn=681;y2nn=721;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{585,692,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{694,769,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////Decima parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=312; y00=775;
		x200=269;y200=756;
		//xnn=657;ynn=866;
		xnn=365;ynn=885;
		x2nn=409;y2nn=756;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{214,746,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{257,736,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(255),color(93),color(62));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~45~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=248; y00=722;
		x200=239;y200=689;
		//xnn=661;ynn=697;
		xnn=397;ynn=850;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{257,736,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{246,693,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~46~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=360; y00=755;
		x200=309;y200=713;
		//xnn=661;ynn=697;
		xnn=366;ynn=833;
		x2nn=579;y2nn=607;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{246,693,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{311,686,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~47~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=360; y00=755;
		x200=309;y200=713;
		//xnn=661;ynn=697;
		xnn=366;ynn=830;
		x2nn=579;y2nn=587;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{246,693,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{311,686,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~48~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=312; y00=681;
		x200=309;y200=649;
		//xnn=661;ynn=697;
		xnn=484;ynn=903;
		x2nn=467;y2nn=726;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{311,686,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{315,657,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~49~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=380; y00=689;
		x200=380;y200=683;
		//xnn=661;ynn=697;
		xnn=392;ynn=895;
		x2nn=511;y2nn=683;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{315,657,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{371,637,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~50~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=369; y00=627;
		x200=367;y200=567;
		//xnn=661;ynn=697;
		xnn=453;ynn=837;
		x2nn=468;y2nn=699;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{371,637,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{380,583,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~51~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=458; y00=700;
		x200=395;y200=545;
		//xnn=661;ynn=697;
		xnn=469;ynn=769;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{380,583,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{449,524,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);

			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~52~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=486; y00=631;
		x200=581;y200=833;
		//xnn=263;ynn=691;
		xnn=444;ynn=738;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{449,524,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{330,822,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~53~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=241; y00=796;
		x200=208;y200=742;
		//xnn=661;ynn=697;
		xnn=272;ynn=784;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{330,822,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{214,746,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		///////////////////////////////////////////////////////////////////////////Decimo primera parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=477; y00=758;
		x200=479;y200=719;
		//xnn=657;ynn=866;
		xnn=421;ynn=767;
		x2nn=444;y2nn=764;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
	//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{457,781,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{463,649,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(255),color(134),color(123));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~55~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=449; y00=649;
		x200=455;y200=739;
		//xnn=263;ynn=691;
		xnn=466;ynn=695;
		x2nn=457;y2nn=753;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{463,649,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{422,757,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~56~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=389; y00=755;
		x200=269;y200=757;
		//xnn=263;ynn=691;
		xnn=346;ynn=783;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{422,757,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{300,788,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~56~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=322; y00=801;
		x200=444;y200=796;
		//xnn=263;ynn=691;
		xnn=361;ynn=772;
		x2nn=464;y2nn=740;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{300,788,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{457,781,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////Decimo segunda parte/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=702; y00=852;
		x200=776;y200=873;
		//xnn=657;ynn=866;
		xnn=683;ynn=822;
		x2nn=759;y2nn=831;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{585,811,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{831,731,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(209),color(28),color(1));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~58~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=523; y00=860;
		x200=461;y200=905;
		//xnn=657;ynn=866;
		xnn=469;ynn=857;
		x2nn=386;y2nn=851;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{585,811,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{380,852,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~60~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=566; y00=720;
		x200=535;y200=683;
		//xnn=657;ynn=866;
		xnn=539;ynn=738;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{594,732,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{539,635,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~61~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=516; y00=708;
		x200=526;y200=661;
		//xnn=657;ynn=866;
		xnn=541;ynn=687;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{543,740,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{539,635,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~61~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=578; y00=916;
		x200=419;y200=813;
		//xnn=657;ynn=866;
		xnn=698;ynn=825;
		x2nn=615;y2nn=719;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{648,861,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{543,740,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~61~~~~~~~~~~~~~~~~
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=990; y00=241;
		x200=1152;y200=719;
		//xnn=657;ynn=866;
		xnn=908;ynn=270;
		x2nn=1089;y2nn=673;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{613,177,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{805,906,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE/////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE/////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE/////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE/////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE/////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=414; y00=1032;
		x200=467;y200=1003;
		//xnn=657;ynn=866;
		xnn=425;ynn=1025;
		x2nn=482;y2nn=1026;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{436,1050,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{465,922,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(24),color(61),color(0));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 22222/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=459; y00=859;
		x200=482;y200=834;
		//xnn=657;ynn=866;
		xnn=480;ynn=985;
		x2nn=480;y2nn=907;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{465,922,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{471,846,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 33333/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=483; y00=944;
		x200=488;y200=895;
		//xnn=657;ynn=866;
		xnn=480;ynn=985;
		x2nn=430;y2nn=846;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{469,985,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{512,861,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 44444/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=437; y00=946;
		x200=406;y200=931;
		//xnn=657;ynn=866;
		xnn=436;ynn=982;
		x2nn=420;y2nn=903;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{414,1007,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{394,903,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 55555/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=368; y00=867;
		x200=553;y200=714;
		//xnn=657;ynn=866;
		xnn=488;ynn=825;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{394,903,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{576,746,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 66666/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=512; y00=861;
		x200=502;y200=905;
		//xnn=657;ynn=866;
		xnn=553;ynn=1098;
		x2nn=553;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{512,859,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{509,938,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 77777/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=519; y00=981;
		x200=544;y200=1068;
		//xnn=657;ynn=866;
		xnn=515;ynn=1082;
		x2nn=xnn;y2nn=1126;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{509,938,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{524,1109,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 88888/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=554; y00=1031;
		x200=559;y200=995;
		//xnn=657;ynn=866;
		xnn=523;ynn=1096;
		x2nn=523;y2nn=800;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{554,1028,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{573,996,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 999999/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=516; y00=1126;
		x200=549;y200=1083;
		//xnn=657;ynn=866;
		xnn=540;ynn=1067;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{524,1109,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{554,1028,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 999999/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=610; y00=1008;
		x200=599;y200=939;
		//xnn=657;ynn=866;
		xnn=450;ynn=950;
		x2nn=577;y2nn=785;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{573,996,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{599,940,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 1010101010/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=415; y00=910;
		x200=417;y200=900;
		//xnn=657;ynn=866;
		xnn=395;ynn=908;
		x2nn=430;y2nn=853;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{429,950,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{471,846,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEEE 11 11 11 11 11 11/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=666; y00=1097;
		x200=676;y200=1043;
		//xnn=657;ynn=866;
		xnn=683;ynn=1000;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{666,1097,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{648,1015,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEE 12121212121212/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=688; y00=1066;
		x200=692;y200=939;
		//xnn=657;ynn=866;
		xnn=673;ynn=950;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{666,1097,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{680,902,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEE 131313131313/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=618; y00=986;
		x200=610;y200=961;
		//xnn=657;ynn=866;
		xnn=700;ynn=1000;
		x2nn=651;y2nn=906;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{648,1015,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{599,940,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEE 1414141414141414/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=727; y00=1036;
		x200=706;y200=1021;
		//xnn=657;ynn=866;
		xnn=726;ynn=1030;
		x2nn=716;y2nn=1025;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{727,1033,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{730,1002,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEE 15151515151515/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=803; y00=941;
		x200=679;y200=896;
		//xnn=657;ynn=866;
		xnn=817;ynn=949;
		x2nn=721;y2nn=845;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{730,1002,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{679,900,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEE 16161616161616/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=744; y00=1000;
		x200=778;y200=985;
		//xnn=657;ynn=866;
		xnn=740;ynn=1001;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{731,1012,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{784,962,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEE 1717171717171717/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=790; y00=935;
		x200=781;y200=895;
		//xnn=657;ynn=866;
		xnn=757;ynn=924;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{784,961,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{770,882,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEE 181818181818181818/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=728; y00=833;
		x200=657;y200=808;
		//xnn=657;ynn=866;
		xnn=800;ynn=970;
		x2nn=506;y2nn=803;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{770,882,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{658,800,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////POR FIN LO VERDEEE 19191919191919/////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		x00=634; y00=777;
		x200=609;y200=750;
		//xnn=657;ynn=866;
		xnn=800;ynn=1170;
		x2nn=505;y2nn=759;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{658,800,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{576,746,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		/*ggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg
		ggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg
		DETALLES DE LO VERDE
		GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
		GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG*/
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=638; y00=790;
		x200=605;y200=762;
		//xnn=657;ynn=866;
		xnn=618;ynn=831;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{646,801,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{585,755,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真2
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=566; y00=822;
		x200=636;y200=917;
		//xnn=657;ynn=866;
		xnn=618;ynn=831;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{585,755,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{661,968,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真3
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=699; y00=910;
		x200=653;y200=844;
		//xnn=657;ynn=866;
		xnn=618;ynn=831;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{661,968,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{649,801,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真4
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=699; y00=910;
		x200=653;y200=844;
		//xnn=657;ynn=866;
		xnn=618;ynn=831;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{661,968,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{649,801,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真5
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=471; y00=763;
		x200=463;y200=880;
		//xnn=657;ynn=866;
		xnn=513;ynn=822;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{569,750,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{469,947,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=492; y00=825;
		x200=574;y200=821;
		//xnn=657;ynn=866;
		xnn=533;ynn=785;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{469,947,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{569,750,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=410; y00=845;
		x200=375;y200=888;
		//xnn=657;ynn=866;
		xnn=422;ynn=864;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{491,793,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{418,934,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=524; y00=989;
		x200=487;y200=876;
		//xnn=657;ynn=866;
		xnn=534;ynn=935;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{530,1082,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{543,820,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=539; y00=1029;
		x200=565;y200=990;
		//xnn=657;ynn=866;
		xnn=529;ynn=959;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{530,1082,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{565,989,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=544; y00=924;
		x200=544;y200=819;
		//xnn=657;ynn=866;
		xnn=537;ynn=941;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{558,983,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{543,820,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=584; y00=929;
		x200=595;y200=874;
		//xnn=657;ynn=866;
		xnn=565;ynn=898;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{589,984,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{591,849,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=586; y00=835;
		x200=574;y200=825;
		//xnn=657;ynn=866;
		xnn=565;ynn=898;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{591,849,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{573,780,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=545; y00=846;
		x200=544;y200=875;
		//xnn=657;ynn=866;
		xnn=565;ynn=898;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{573,780,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{564,979,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=564; y00=984;
		x200=578;y200=989;
		//xnn=657;ynn=866;
		xnn=580;ynn=938;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{564,979,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{589,984,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=673; y00=1058;
		x200=664;y200=1038;
		//xnn=657;ynn=866;
		xnn=657;ynn=1010;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{660,1029,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{663,1014,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(97),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=678; y00=986;
		x200=676;y200=927;
		//xnn=657;ynn=866;
		xnn=672;ynn=964;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{663,1014,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{673,949,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=666; y00=1000;
		x200=669;y200=1005;
		//xnn=657;ynn=866;
		xnn=660;ynn=1050;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{673,949,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{619,902,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=616; y00=899;
		x200=591;y200=889;
		//xnn=657;ynn=866;
		xnn=660;ynn=1020;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{619,902,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{600,922,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=610; y00=956;
		x200=650;y200=1012;
		//xnn=657;ynn=866;
		xnn=644;ynn=1004;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{600,922,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{660,1029,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=713; y00=900;
		x200=797;y200=942;
		//xnn=657;ynn=866;
		xnn=761;ynn=942;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{661,877,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{750,989,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=853; y00=929;
		x200=664;y200=827;
		//xnn=657;ynn=866;
		xnn=761;ynn=942;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{750,989,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{663,810,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//／真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真真6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=668; y00=837;
		x200=664;y200=859;
		//xnn=657;ynn=866;
		xnn=761;ynn=942;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{671,823,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{660,878,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(66),color(94),color(7));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		/*ggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg
		ggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg
		DETALLES DE LO VERDE
		GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
		GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG*/
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=641; y00=793;
		x200=605;y200=762;
		//xnn=657;ynn=866;
		xnn=618;ynn=831;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{650,802,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{586,757,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(88),color(125),color(9));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////1
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=566; y00=827;
		x200=626;y200=919;
		//xnn=657;ynn=866;
		xnn=618;ynn=831;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{586,757,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{661,968,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////2
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=658; y00=863;
		x200=653;y200=830;
		//xnn=657;ynn=866;
		xnn=618;ynn=831;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{661,968,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{650,802,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////3
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=671; y00=885;
		x200=659;y200=841;
		//xnn=657;ynn=866;
		xnn=728;ynn=894;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{683,891,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{678,846,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////4
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=780; y00=959;
		x200=689;y200=884;
		//xnn=657;ynn=866;
		xnn=697;ynn=870;
		x2nn=728;y2nn=894;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{678,846,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{765,955,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////5
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=755; y00=953;
		x200=723;y200=912;
		//xnn=657;ynn=866;
		xnn=728;ynn=894;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{765,955,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{683,891,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=573; y00=950;
		x200=585;y200=785;
		//xnn=657;ynn=866;
		xnn=559;ynn=901;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{589,984,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{560,820,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=551; y00=832;
		x200=550;y200=952;
		//xnn=657;ynn=866;
		xnn=559;ynn=901;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{560,820,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{568,979,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=573; y00=993;
		x200=592;y200=986;
		//xnn=657;ynn=866;
		xnn=559;ynn=901;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{568,979,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{589,984,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=565; y00=1011;
		x200=550;y200=988;
		//xnn=657;ynn=866;
		xnn=539;ynn=998;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{543,1033,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{540,944,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=535; y00=885;
		x200=547;y200=829;
		//xnn=657;ynn=866;
		xnn=539;ynn=998;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{540,944,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{534,831,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=481; y00=888;
		x200=532;y200=1021;
		//xnn=657;ynn=866;
		xnn=539;ynn=998;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{534,831,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{543,1033,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=488; y00=887;
		x200=505;y200=838;
		//xnn=657;ynn=866;
		xnn=489;ynn=861;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{479,908,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{519,824,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=533; y00=811;
		x200=525;y200=805;
		//xnn=657;ynn=866;
		xnn=489;ynn=861;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{519,824,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{502,821,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
	
		}
		
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=479; y00=839;
		x200=473;y200=921;
		//xnn=657;ynn=866;
		xnn=489;ynn=861;
		x2nn=xnn;y2nn=ynn;
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{502,821,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{479,908,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=471; y00=835;
		x200=433;y200=835;
		//xnn=657;ynn=866;
		xnn=438;ynn=845;
		x2nn=xnn;y2nn=ynn;
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{473,834,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{483,807,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=436; y00=835;
		x200=375;y200=880;
		//xnn=657;ynn=866;
		xnn=416;ynn=865;
		x2nn=xnn;y2nn=ynn;
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{483,807,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{418,934,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=415; y00=910;
		x200=405;y200=877;
		//xnn=657;ynn=866;
		xnn=415;ynn=854;
		x2nn=xnn;y2nn=ynn;
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{418,934,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{473,834,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=652; y00=1005;
		x200=610;y200=956;
		//xnn=657;ynn=866;
		xnn=644;ynn=966;
		x2nn=xnn;y2nn=ynn;
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{655,1023,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{600,922,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=687; y00=1076;
		x200=659;y200=949;
		//xnn=657;ynn=866;
		xnn=654;ynn=985;
		x2nn=xnn;y2nn=ynn;
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{655,1023,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{620,902,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7777
		//**********************************************************************************************************************************
		//////////////////////////////////////////////////////////Luz DE LO VERDE
			//**********************************************************************************************************************************
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=719; y00=885;
		x200=689;y200=898;
		//xnn=657;ynn=866;
		xnn=704;ynn=881;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{757,939,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{680,877,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glColor3f(color(144),color(181),color(101));
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=673; y00=861;
		x200=737;y200=899;
		//xnn=657;ynn=866;
		xnn=726;ynn=897;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{680,877,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{742,903,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=761; y00=913;
		x200=772;y200=913;
		//xnn=657;ynn=866;
		xnn=725;ynn=901;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{742,903,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{757,939,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=641; y00=922;
		x200=638;y200=846;
		//xnn=657;ynn=866;
		xnn=629;ynn=875;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{655,940,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{618,847,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=627; y00=953;
		x200=636;y200=918;
		//xnn=657;ynn=866;
		xnn=619;ynn=934;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{660,1023,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{605,908,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=558; y00=935;
		x200=577;y200=869;
		//xnn=657;ynn=866;
		xnn=555;ynn=905;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{571,985,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{555,827,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=515; y00=969;
		x200=510;y200=942;
		//xnn=657;ynn=866;
		xnn=525;ynn=936;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{546,1016,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{525,870,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		x00=477; y00=881;
		x200=520;y200=832;
		//xnn=657;ynn=866;
		xnn=494;ynn=844;
		x2nn=xnn;y2nn=ynn;
		
		//calculamos el dda de ambas lineas
		//dda1
		dx=xnn-x00;dy=ynn-y00;
		
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		
		//dda2
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		
		//		expresion-relacional ? expr1 : expr2
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
			float PuntosdeControl[4][3]={{473,910,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{513,825,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//necesitamos xinicial,yinical,xfinal,yfinal,xpc1,ypc1,centrofin
		//inicializamos variables
		//puntos de control
		x00=408; y00=864;
		//segundo punto de control
		x200=455;y200=856;
		//1punto de control final 
		xnn=408;ynn=870;
		//segundo punto de control final
		x2nn=xnn;y2nn=ynn;
		//cuentas
		dx=xnn-x00;dy=ynn-y00;
		if(fabs(dx)>fabs(dy))
			m=fabs(dx);
		else
			m=fabs(dy);
		eps=1/m; xi=x00; yi=y00;
		dx2=x2nn-x200;dy2=y2nn-y200;
		if(fabs(dx2)>fabs(dy2))
			m2=fabs(dx2);
		else
			m2=fabs(dy2);
		eps2=1/m2; xi2=x200; yi2=y200;
		m>m2 ? n=m : n=m2;
		
		for(int i=1;i<=n;i++){
			xi=xi+eps*dx;
			yi=yi+eps*dy;
			xi2=xi2+eps2*dx2;
			yi2=yi2+eps2*dy2;
									//punto inicial                             //punto final
			float PuntosdeControl[4][3]={{414,925,0.0},{xi,yi,0.0},{xi2,yi2,0.0},{455,829,0.0}};
			glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosdeControl);
			glEnable(GL_MAP1_VERTEX_3);
			glMapGrid1f(100,0.0,1.0);
			glEvalMesh1(GL_LINE,0,100);//glEvalMesh1(GL_POINT,0,100);
			glDisable(GL_MAP1_VERTEX_3);
		}
		
		glFlush();	
		
	}
int main (int argc, char **argv) {
	glutInitWindowSize(600,600);
	glutInit (&argc, argv);
	glutCreateWindow("Curvas de Bezier");
	inicializa();
	glutDisplayFunc(CurvaBezier);
	glutMainLoop();
	return 0;
}
